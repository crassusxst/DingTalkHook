//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTOrgEmployeeSimpleModel : Marshal
{
    NSNumber *_orgId;
    NSNumber *_uid;
    NSString *_staffId;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *staffId; // @synthesize staffId=_staffId;
@property(retain, nonatomic) NSNumber *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSNumber *orgId; // @synthesize orgId=_orgId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

