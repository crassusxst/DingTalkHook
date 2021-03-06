//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactPickSearchHandler.h"

#import "DTContactPickSearchViewControllerDelegate-Protocol.h"

@class DTSectionItem, NSArray, NSDictionary, NSString;

@interface DTContactPickContactAndGroupSearchHandler : DTContactPickSearchHandler <DTContactPickSearchViewControllerDelegate>
{
    unsigned long long _bizType;
    DTSectionItem *_groupSectionItem;
    NSDictionary *_groupIndex;
    NSString *_searchText;
    NSArray *_dataSource;
    DTSectionItem *_externalSectionItem;
    DTSectionItem *_sectionItem;
    NSDictionary *_index;
    NSDictionary *_externalIndex;
}

+ (id)joinAttibutedMobileName:(id)arg1 andNick:(id)arg2;
@property(copy, nonatomic) NSDictionary *externalIndex; // @synthesize externalIndex=_externalIndex;
@property(copy, nonatomic) NSDictionary *index; // @synthesize index=_index;
@property(retain, nonatomic) DTSectionItem *sectionItem; // @synthesize sectionItem=_sectionItem;
@property(retain, nonatomic) DTSectionItem *externalSectionItem; // @synthesize externalSectionItem=_externalSectionItem;
@property(copy, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(copy, nonatomic) NSDictionary *groupIndex; // @synthesize groupIndex=_groupIndex;
@property(retain, nonatomic) DTSectionItem *groupSectionItem; // @synthesize groupSectionItem=_groupSectionItem;
@property(nonatomic) unsigned long long bizType; // @synthesize bizType=_bizType;
- (void).cxx_destruct;
- (void)updateGroupCellItemWithIdentifier:(id)arg1 isSelect:(_Bool)arg2;
- (void)conversationsHasUnselected:(id)arg1;
- (void)conversationsHasSelected:(id)arg1;
- (void)conversationHasUnselected:(id)arg1;
- (void)conversationHasSelected:(id)arg1;
- (void)showGroupPick;
- (void)showConversationMembers:(id)arg1;
- (void)conversationCellDidSelectWithConversation:(id)arg1;
- (void)searchGroupFromServerSearchText:(id)arg1 appendTo:(id)arg2;
- (id)signImageTypeForConversation:(id)arg1;
- (id)filterBindConversations:(id)arg1;
- (void)dealWithConversations:(id)arg1 searchText:(id)arg2 hasMore:(_Bool)arg3;
- (id)filterConversation:(id)arg1;
- (void)fetchMTMConversationsWithSearchText:(id)arg1;
- (void)dealloc;
- (void)updateCellItemWithIdentifier:(id)arg1 isSelect:(_Bool)arg2;
- (void)personHasUnselected:(id)arg1;
- (void)personHasSelected:(id)arg1;
- (id)joinedDepartsNameWithDeparts:(id)arg1 andTitle:(id)arg2;
- (id)fullMobileWithMobile:(id)arg1 countryCode:(id)arg2;
- (id)identifierWithMobileContact:(id)arg1 item:(id)arg2;
- (id)avatarModelWithMobielContact:(id)arg1;
- (id)identifierWithExternalContact:(id)arg1 item:(id)arg2;
- (id)identifierWithEnterpriseCard:(id)arg1 item:(id)arg2;
- (id)avatarModelWithEnterpriseCard:(id)arg1;
- (id)identifierWithContact:(id)arg1 item:(id)arg2;
- (id)avatarModelWithContact:(id)arg1;
- (void)persionSearchCell:(id)arg1 didSelectWithItem:(id)arg2 identifier:(id)arg3;
- (void)persionSearchCell:(id)arg1 didSelectWithItem:(id)arg2;
- (id)showsEnterpriseCardResults:(id)arg1 searchText:(id)arg2;
- (id)showsMobileContacts:(id)arg1 searchText:(id)arg2;
- (id)showsFriends:(id)arg1 searchText:(id)arg2;
- (id)showUsualContacts:(id)arg1 searchText:(id)arg2;
- (id)showsAliasContacts:(id)arg1 searchText:(id)arg2;
- (void)colleagueListWithSearchText:(id)arg1 datasource:(id)arg2 validUidSet:(id)arg3 startForMoreColleague:(long long)arg4 noMoreColleague:(_Bool)arg5 complete:(CDUnknownBlockType)arg6;
- (void)colleagueListWithSearchTextV2:(id)arg1 datasource:(id)arg2 validUidSet:(id)arg3 startForMoreColleague:(id)arg4 noMoreColleague:(_Bool)arg5 complete:(CDUnknownBlockType)arg6;
- (void)userListWithSearchText:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)dt_searchUserWithSearchText:(id)arg1 size:(long long)arg2;
- (void)gotoMoreContacts:(id)arg1;
- (id)uidsOfEnterpriseCards:(id)arg1;
- (id)uidsOfUsualContacts:(id)arg1;
- (id)uidsOfContacts:(id)arg1;
- (id)createCellItemsWithPersons:(id)arg1;
- (void)searchExternalContactWithSearchText:(id)arg1;
- (void)searchUserWithSearchText:(id)arg1 size:(long long)arg2;
- (void)searchText:(id)arg1;
- (_Bool)isSearchRequestExpireWithSearchText:(id)arg1;
- (id)emptyViewForViewController:(id)arg1;
- (_Bool)shouldShowEmptyView:(id)arg1;
- (id)dataSourceForSearchViewController:(id)arg1;
- (void)searchViewWillDestory:(id)arg1;
- (void)searchViewWillShow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

