//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTThirdPartyEncryptOrgInfo : NSObject
{
    _Bool _priority;
    _Bool _bossChatEnable;
    _Bool _fileEnable;
    long long _orgId;
    NSString *_corpId;
}

@property(nonatomic) _Bool fileEnable; // @synthesize fileEnable=_fileEnable;
@property(nonatomic) _Bool bossChatEnable; // @synthesize bossChatEnable=_bossChatEnable;
@property(nonatomic) _Bool priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *corpId; // @synthesize corpId=_corpId;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
- (void).cxx_destruct;

@end

