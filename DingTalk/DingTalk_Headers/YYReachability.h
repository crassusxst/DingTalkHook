//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CTTelephonyNetworkInfo;

@interface YYReachability : NSObject
{
    _Bool _scheduled;
    _Bool _allowWWAN;
    CDUnknownBlockType _notifyBlock;
    struct __SCNetworkReachability *_ref;
    CTTelephonyNetworkInfo *_networkInfo;
}

+ (id)reachabilityWithAddress:(const struct sockaddr *)arg1;
+ (id)reachabilityWithHostname:(id)arg1;
+ (id)reachabilityForLocalWifi;
+ (id)reachability;
+ (id)sharedQueue;
@property(retain, nonatomic) CTTelephonyNetworkInfo *networkInfo; // @synthesize networkInfo=_networkInfo;
@property(nonatomic) _Bool allowWWAN; // @synthesize allowWWAN=_allowWWAN;
@property(nonatomic) _Bool scheduled; // @synthesize scheduled=_scheduled;
@property(nonatomic) struct __SCNetworkReachability *ref; // @synthesize ref=_ref;
@property(copy, nonatomic) CDUnknownBlockType notifyBlock; // @synthesize notifyBlock=_notifyBlock;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isReachable) _Bool reachable;
@property(readonly, nonatomic) unsigned long long wwanStatus;
@property(readonly, nonatomic) unsigned long long status;
@property(readonly, nonatomic) unsigned int flags;
- (void)dealloc;
- (id)initWithRef:(struct __SCNetworkReachability *)arg1;
- (id)init;

@end

