//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class YYThreadSafeDictionary;

@interface DTGoodTimeRedenvelopTransitionManager : NSObject
{
    YYThreadSafeDictionary *_goodTimeRedEnvelopInComingDict;
}

+ (id)sharedInstance;
@property(copy, nonatomic) YYThreadSafeDictionary *goodTimeRedEnvelopInComingDict; // @synthesize goodTimeRedEnvelopInComingDict=_goodTimeRedEnvelopInComingDict;
- (void).cxx_destruct;
- (long long)curTime;
- (void)onMessageSendSuccess:(id)arg1;
- (id)fetchGoodTimeRedEnvelopMessagesWithCid:(id)arg1;
- (void)setPackUp:(_Bool)arg1 message:(id)arg2;
- (_Bool)isPackUp:(id)arg1;
- (void)setSubcribed:(id)arg1;
- (_Bool)isSubcribe:(id)arg1;
- (void)hasClickGoodTimeRedEnvelopMessage:(id)arg1;
- (void)addGoodTimeRedEnvelopMessages:(id)arg1 cid:(id)arg2;
- (void)latestGoodTimeRedEnvelopMessageWithCid:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

