//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "OpenModelProtocol-Protocol.h"

@class NSString;

@interface DTRedEnvelopRecordModel : OpenModel <OpenModelProtocol>
{
    NSString *_businessId;
    NSString *_cid;
    NSString *_md5String;
    NSString *_jsonString;
    long long _hasSendMsg;
    long long _createAt;
}

+ (unsigned long long)currentNewestVersion;
+ (_Bool)upgradeTableToVersion:(unsigned long long)arg1 MDHandler:(id)arg2;
+ (void)createTableWithMDHandler:(id)arg1;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
@property(nonatomic) long long createAt; // @synthesize createAt=_createAt;
@property(nonatomic) long long hasSendMsg; // @synthesize hasSendMsg=_hasSendMsg;
@property(copy, nonatomic) NSString *jsonString; // @synthesize jsonString=_jsonString;
@property(copy, nonatomic) NSString *md5String; // @synthesize md5String=_md5String;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSString *businessId; // @synthesize businessId=_businessId;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

