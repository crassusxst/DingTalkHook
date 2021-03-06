//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LWPCodeDashboard, NSMutableDictionary, NSRecursiveLock, NSString;
@protocol LWPLoggerDelegate;

@interface LWPLogger : NSObject
{
    NSString *_logUid;
    struct {
        unsigned int logDebug:1;
        unsigned int logInfo:1;
        unsigned int logWarn:1;
        unsigned int logError:1;
    } _delegateFlags;
    int _udpFd;
    struct sockaddr_storage _remoteAddr;
    NSRecursiveLock *_logLock;
    unsigned long long _loggerLevel;
    id <LWPLoggerDelegate> _delegate;
    NSMutableDictionary *_logInfo;
    LWPCodeDashboard *_dashboard;
}

+ (id)sharedInstance;
@property(retain, nonatomic) LWPCodeDashboard *dashboard; // @synthesize dashboard=_dashboard;
@property(retain, nonatomic) NSMutableDictionary *logInfo; // @synthesize logInfo=_logInfo;
@property(nonatomic) __weak id <LWPLoggerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long loggerLevel; // @synthesize loggerLevel=_loggerLevel;
- (void).cxx_destruct;
- (void)_sendDashboardMessage:(id)arg1;
- (void)sendDashboardCode:(long long)arg1;
- (void)sendUdpLog:(int)arg1 type:(id)arg2 msg:(id)arg3;
- (void)_sendData:(id)arg1;
- (void)_sendLog:(id)arg1;
- (void)closeSocket;
- (void)getLogServerAddr;
- (_Bool)configSocket:(int)arg1;
- (void)reconfigSocket;
- (void)startRemoteLogging;
- (void)logLevel:(unsigned long long)arg1 logCode:(int)arg2 format:(id)arg3;
- (void)didChangeUid:(id)arg1;
- (void)dealloc;
- (id)LWPLogFolder;
@property(copy, nonatomic) NSString *logUid;
- (void)configLWPLogger;
- (void)disableSimilatorLWPLogger;
- (void)loadLogUid;
- (id)init;

@end

