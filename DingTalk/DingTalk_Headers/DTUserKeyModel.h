//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTUserKeyModel : Marshal
{
    NSNumber *_keyId;
    NSString *_keySecret;
    NSNumber *_expireTime;
    NSNumber *_status;
}

@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) NSNumber *expireTime; // @synthesize expireTime=_expireTime;
@property(copy, nonatomic) NSString *keySecret; // @synthesize keySecret=_keySecret;
@property(retain, nonatomic) NSNumber *keyId; // @synthesize keyId=_keyId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

