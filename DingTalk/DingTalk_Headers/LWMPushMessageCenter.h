//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface LWMPushMessageCenter : NSObject
{
}

+ (id)sharedInstance;
- (void)replyMID:(id)arg1 withBody:(id)arg2 withResponseStatus:(unsigned long long)arg3;
- (void)onPushMessageReceived:(id)arg1;
- (void)removeTopic:(id)arg1;
- (void)topic:(id)arg1 handler:(id)arg2;
- (void)onRequest:(id)arg1 response:(id)arg2;
- (void)dealloc;
- (id)init;

@end

