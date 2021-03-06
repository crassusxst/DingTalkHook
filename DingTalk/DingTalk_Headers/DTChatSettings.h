//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTChatSettings : NSObject
{
}

+ (void)checkShouldQuitStreamlineMode:(CDUnknownBlockType)arg1;
+ (void)updateStreamlineModeQuickMenuEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)streamlineModeQuickMenuEnabled;
+ (void)updateStreamlineModeQuickMenuEnabled:(_Bool)arg1 updateCache:(_Bool)arg2 updateCacheOnSucceed:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)setupStreamlineModeQuickMenuEnabledIfNeeds;
+ (void)updateShowStreamlinePullDownGuide:(_Bool)arg1;
+ (_Bool)hasShowStreamlinePullDownGuide;
+ (id)streamlinePullDownGuideCacheKey;
+ (void)updateChatFilterTimeStepReset:(_Bool)arg1;
+ (_Bool)hasResetChatFilterTimeStepContent;
+ (id)chatFilterTimeStepResetCacheKey;
+ (void)updateChatFilterTimeStep:(long long)arg1;
+ (long long)currentTimeStepForChatFilter;
+ (_Bool)hasCachedChatFilterTimeStpe;
+ (id)chatFilterTimeStepCacheKey;
+ (_Bool)isEnabledIndustryGroup;
+ (_Bool)isOpenedQuickExpandingGroup;
+ (_Bool)isSupportedQuickExpandingGroupFunction;
+ (void)setAtMeMessageListOpened:(_Bool)arg1;
+ (_Bool)isOpenedAtMeMessageList;
+ (void)setOpenEffectiveMode:(_Bool)arg1;
+ (_Bool)isEffectiveModeOpened;
+ (void)setIsAllowedShowEffectiveMode:(_Bool)arg1;
+ (_Bool)isAllowedShowEffectiveMode;
+ (_Bool)syncGetIsOpenedEffectiveMode;
+ (_Bool)syncGetIsAllowedShowEffectiveMode;
+ (_Bool)isEnabledEffectiveModeFunction;
+ (void)resetEffectiveModeContext;
+ (void)closeMessageTranslaltionGuide;
+ (_Bool)isMessageTranslationGuideEnabled;
+ (void)closeMessageToDingGuide;
+ (_Bool)isMessageToDingGuideEnabled;
+ (void)setFullscreenRecordEnable:(_Bool)arg1;
+ (_Bool)isFullscreenRecordEnabled;

@end

