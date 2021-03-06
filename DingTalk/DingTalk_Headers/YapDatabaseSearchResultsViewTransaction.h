//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YapDatabaseViewTransaction.h"

@class NSMutableDictionary, YapDatabaseSearchQueue, YapMemoryTableTransaction;

@interface YapDatabaseSearchResultsViewTransaction : YapDatabaseViewTransaction
{
    YapMemoryTableTransaction *snippetTableTransaction;
    struct _YapRowidSet *ftsRowids;
    NSMutableDictionary *snippets;
    YapDatabaseSearchQueue *searchQueue;
}

- (void).cxx_destruct;
- (id)snippetForKey:(id)arg1 inCollection:(id)arg2;
- (void)performSearchWithQueue:(id)arg1;
- (void)performSearchFor:(id)arg1;
- (void)updateViewUsingBlocks;
- (void)updateViewFromParent;
- (id)query;
- (void)setGroupingBlock:(id)arg1 groupingBlockType:(long long)arg2 sortingBlock:(id)arg3 sortingBlockType:(long long)arg4 versionTag:(id)arg5;
- (void)setGrouping:(id)arg1 sorting:(id)arg2 versionTag:(id)arg3;
- (void)view:(id)arg1 didRepopulateWithFlags:(int)arg2;
- (void)handleReplaceMetadata:(id)arg1 forCollectionKey:(id)arg2 withRowid:(long long)arg3;
- (void)handleReplaceObject:(id)arg1 forCollectionKey:(id)arg2 withRowid:(long long)arg3;
- (void)handleUpdateObject:(id)arg1 forCollectionKey:(id)arg2 withMetadata:(id)arg3 rowid:(long long)arg4;
- (void)handleInsertObject:(id)arg1 forCollectionKey:(id)arg2 withMetadata:(id)arg3 rowid:(long long)arg4;
- (void)rollbackTransaction;
- (void)commitTransaction;
- (void)didRemoveAllRowids;
- (void)didRemoveRowids:(id)arg1 collectionKeys:(id)arg2;
- (void)didRemoveRowid:(long long)arg1 collectionKey:(id)arg2;
- (void)didInsertRowid:(long long)arg1 collectionKey:(id)arg2;
- (id)snippetTableName;
- (void)repopulateViewDueToParentFilteringBlockChange;
- (void)repopulateViewDueToParentGroupingBlockChange;
- (void)repopulateFtsRowidsAndSnippets;
- (_Bool)populateView;
- (_Bool)createTables;
- (void)dropTablesForOldSubclassVersion:(int)arg1;
- (_Bool)prepareIfNeeded;
- (_Bool)createIfNeeded;
- (void)dealloc;
- (id)initWithViewConnection:(id)arg1 databaseTransaction:(id)arg2;

@end

