//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SClient.h"

@interface DTShareIService : SClient
{
}

+ (id)_appname__;
+ (id)_serviceKey__;
- (void)checkShareApp:(id)arg1 identifier:(id)arg2 signature:(id)arg3 type:(id)arg4 shareModel:(id)arg5 ext:(id)arg6 callback:(id)arg7;
- (void)parseUrlFilter:(id)arg1 callback:(id)arg2;
- (void)parseUrl:(id)arg1 callback:(id)arg2;

@end

