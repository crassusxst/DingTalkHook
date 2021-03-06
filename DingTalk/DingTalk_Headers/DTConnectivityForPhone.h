//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTConnectivityCallHandler, DTConnectivityDingHandler, DTConnectivityLoginHandler, DTConnectivityQRHandler, DTConnectivitySearchHandler;

@interface DTConnectivityForPhone : NSObject
{
    DTConnectivityDingHandler *_dingHandler;
    DTConnectivityQRHandler *_qrHandler;
    DTConnectivitySearchHandler *_searchHandler;
    DTConnectivityCallHandler *_callHandler;
    DTConnectivityLoginHandler *_loginHandler;
}

+ (id)sharedInstance;
@property(retain, nonatomic) DTConnectivityLoginHandler *loginHandler; // @synthesize loginHandler=_loginHandler;
@property(retain, nonatomic) DTConnectivityCallHandler *callHandler; // @synthesize callHandler=_callHandler;
@property(retain, nonatomic) DTConnectivitySearchHandler *searchHandler; // @synthesize searchHandler=_searchHandler;
@property(retain, nonatomic) DTConnectivityQRHandler *qrHandler; // @synthesize qrHandler=_qrHandler;
@property(retain, nonatomic) DTConnectivityDingHandler *dingHandler; // @synthesize dingHandler=_dingHandler;
- (void).cxx_destruct;
- (void)sendAvatarToWatchWithUids:(id)arg1;
- (void)dealloc;
- (id)init;

@end

