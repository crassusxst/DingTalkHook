//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTBizMemberWorkStatus : NSObject
{
    long long _uid;
    NSString *_workStatus;
    NSString *_color;
    NSString *_empName;
    double _savedTime;
}

@property(nonatomic) double savedTime; // @synthesize savedTime=_savedTime;
@property(copy, nonatomic) NSString *empName; // @synthesize empName=_empName;
@property(copy, nonatomic) NSString *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *workStatus; // @synthesize workStatus=_workStatus;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
- (void).cxx_destruct;

@end

