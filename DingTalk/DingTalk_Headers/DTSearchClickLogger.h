//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTSearchClickLogger : NSObject
{
    unsigned long long _searchResultActionType;
    long long _searchDataType;
    long long _searchTabType;
    long long _position;
    NSString *_identifier;
}

@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(nonatomic) long long searchTabType; // @synthesize searchTabType=_searchTabType;
@property(nonatomic) long long searchDataType; // @synthesize searchDataType=_searchDataType;
@property(nonatomic) unsigned long long searchResultActionType; // @synthesize searchResultActionType=_searchResultActionType;
- (void).cxx_destruct;

@end

