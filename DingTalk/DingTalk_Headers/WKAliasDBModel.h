//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "OpenModelProtocol-Protocol.h"

@class NSString;

@interface WKAliasDBModel : OpenModel <OpenModelProtocol>
{
    long long _openId;
    NSString *_alias;
    NSString *_pinyin;
}

+ (void)upgradeVersion2:(id)arg1;
+ (unsigned long long)currentNewestVersion;
+ (_Bool)upgradeTableToVersion:(unsigned long long)arg1 MDHandler:(id)arg2;
+ (void)createTableWithMDHandler:(id)arg1;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
+ (id)ftsTableColumnsTokenizers;
+ (id)ftsTableNewColumns;
+ (id)ftsTableColumns;
+ (void)upgradeTriggerWithMDHandler:(id)arg1;
+ (_Bool)isMatchedWithTableName:(id)arg1;
+ (id)convertFromIDLModels:(id)arg1;
+ (id)convertFromIDLModel:(id)arg1;
@property(copy, nonatomic) NSString *pinyin; // @synthesize pinyin=_pinyin;
@property(copy, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(nonatomic) long long openId; // @synthesize openId=_openId;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

