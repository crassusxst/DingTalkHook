//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSDate, NSNumber, NSString;

@interface DTBirthdayUserModel : Marshal
{
    NSString *_uidEnc;
    NSString *_nick;
    NSString *_icon;
    NSString *_birthIcon;
    NSDate *_birthday;
    NSNumber *_type;
    NSString *_subhead;
    NSNumber *_blessCnt;
}

@property(retain, nonatomic) NSNumber *blessCnt; // @synthesize blessCnt=_blessCnt;
@property(copy, nonatomic) NSString *subhead; // @synthesize subhead=_subhead;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(retain, nonatomic) NSDate *birthday; // @synthesize birthday=_birthday;
@property(copy, nonatomic) NSString *birthIcon; // @synthesize birthIcon=_birthIcon;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(copy, nonatomic) NSString *uidEnc; // @synthesize uidEnc=_uidEnc;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

