//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCache, NSSet;

@interface DTCMailAvatarUidFetcher : NSObject
{
    _Bool _isRunning;
    NSCache *_memCache;
    NSSet *_waitingSet;
}

+ (id)sharedFetcher;
@property(retain, nonatomic) NSSet *waitingSet; // @synthesize waitingSet=_waitingSet;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) NSCache *memCache; // @synthesize memCache=_memCache;
- (void).cxx_destruct;
- (void)onAppEnterBackground:(id)arg1;
- (void)onMemoryWarning:(id)arg1;
- (id)buildUpdatedWrapperFromExist:(id)arg1 email:(id)arg2 uid:(long long)arg3 url:(id)arg4;
- (id)firstDBWrapperWithEmail:(id)arg1 account:(id)arg2;
- (id)currentMailAccount;
- (void)cacheResult:(id)arg1;
- (id)alimeiAvatarURLMapFromEmail:(id)arg1 size:(double)arg2;
- (id)finalMapFromUidResult:(id)arg1 all:(id)arg2;
- (void)calculateFinalLinkWithResult:(id)arg1 andAll:(id)arg2;
- (void)processUidResult:(id)arg1 andAll:(id)arg2;
- (_Bool)tick;
- (_Bool)reset;
- (id)uidOrUrlForEmail:(id)arg1;
- (_Bool)enqueueWithEmailSet:(id)arg1;
- (void)dealloc;
- (void)setup;
- (id)init;

@end

