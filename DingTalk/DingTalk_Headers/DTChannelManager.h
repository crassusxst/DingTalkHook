//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSRecursiveLock;

@interface DTChannelManager : NSObject
{
    long long _currentUid;
    NSArray *_channelList;
    NSDictionary *_channelMap;
    NSDictionary *_agentIdMap;
    NSDictionary *_orgIdCidMap;
    NSDictionary *_senderIdAgentIdMap;
    NSDictionary *_senderIdOrgIdMap;
    NSDictionary *_agentIdOrgIdMap;
    NSDictionary *_corpIdOrgIdMap;
    NSMutableDictionary *_chConvUnreadCountMap;
    NSRecursiveLock *_chConvUnreadCount;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSRecursiveLock *chConvUnreadCount; // @synthesize chConvUnreadCount=_chConvUnreadCount;
@property(retain, nonatomic) NSMutableDictionary *chConvUnreadCountMap; // @synthesize chConvUnreadCountMap=_chConvUnreadCountMap;
@property(copy) NSDictionary *corpIdOrgIdMap; // @synthesize corpIdOrgIdMap=_corpIdOrgIdMap;
@property(copy) NSDictionary *agentIdOrgIdMap; // @synthesize agentIdOrgIdMap=_agentIdOrgIdMap;
@property(copy) NSDictionary *senderIdOrgIdMap; // @synthesize senderIdOrgIdMap=_senderIdOrgIdMap;
@property(copy) NSDictionary *senderIdAgentIdMap; // @synthesize senderIdAgentIdMap=_senderIdAgentIdMap;
@property(copy) NSDictionary *orgIdCidMap; // @synthesize orgIdCidMap=_orgIdCidMap;
@property(copy) NSDictionary *agentIdMap; // @synthesize agentIdMap=_agentIdMap;
@property(copy) NSDictionary *channelMap; // @synthesize channelMap=_channelMap;
@property(copy) NSArray *channelList; // @synthesize channelList=_channelList;
@property(nonatomic) long long currentUid; // @synthesize currentUid=_currentUid;
- (void).cxx_destruct;
- (void)private_TmpDeleteChannalInfoWithOrgId:(long long)arg1;
- (void)channelAuthedNotification:(id)arg1;
- (void)launchAuthFlowWithOrgId:(long long)arg1;
- (_Bool)channelHasBeenAuthed:(long long)arg1;
- (void)cSConfigInfoUpdatedNotification:(id)arg1;
- (void)onAccountLogoutNotification:(id)arg1;
- (void)onAccountLoginNotification:(id)arg1;
- (void)delayAsyncUpdateChannelUnreadCount:(id)arg1 loadDB:(id)arg2;
- (void)delayAsyncUpdateChannelUnreadCount:(id)arg1;
- (void)asyncUpdateChannelUnreadCount;
- (void)clearNewChannelUnreadCountForAllScence;
- (void)reproduceNewChannelUnreadCountForAllScence;
- (void)consumeNewChannelUnreadCountForScence:(long long)arg1;
- (_Bool)hasNewChannelUnreadCountForScence:(long long)arg1;
- (void)resetAllChannelUnreadCount;
- (void)setChannelConvUnreadCount:(long long)arg1 orgId:(long long)arg2;
- (long long)channelConvUnreadCountWithOrgId:(long long)arg1;
- (long long)channelAllUnreadCount;
- (_Bool)comparableBusinessOrder:(id)arg1;
- (id)buildMockSectionListWithBusinessOrder:(id)arg1;
- (void)queryMicroSectionListWithBusinessForm:(long long)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (id)microSectionListWithOrgId:(long long)arg1;
- (long long)orgIdWithAgentId:(long long)arg1;
- (long long)orgIdWithSenderId:(long long)arg1;
- (long long)agentIdWithSenderId:(long long)arg1;
- (long long)orgIdWithCid:(id)arg1;
- (id)cidWithOrgId:(long long)arg1;
- (long long)orgIdWithCorpId:(id)arg1;
- (id)chAppInfoWigtAgentId:(long long)arg1;
- (id)channelInfoForOrgId:(long long)arg1;
- (id)userChannelList;
- (void)postUpdateNotification:(id)arg1;
- (void)rebuildIndexes;
- (void)clearIndexes;
- (void)clearChannelInfo;
- (void)fetchChannelInfo;
- (id)init;
- (void)dealloc;
- (void)uidArrayWithStaffIds:(id)arg1 orgId:(long long)arg2 finishBlock:(CDUnknownBlockType)arg3;

@end

