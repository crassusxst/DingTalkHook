//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SClient.h"

@interface DTIDLSkynetService : SClient
{
}

+ (id)_appname__;
+ (id)_serviceKey__;
- (void)getLatestPost:(id)arg1 callback:(id)arg2;
- (void)readNotice:(id)arg1;
- (void)getPostDetail:(id)arg1 callback:(id)arg2;
- (void)recallComment:(id)arg1 commentId:(id)arg2 callback:(id)arg3;
- (void)comment:(id)arg1 comment:(id)arg2 callback:(id)arg3;
- (void)recallLike:(id)arg1 callback:(id)arg2;
- (void)likeV2:(id)arg1 uuid:(id)arg2 callback:(id)arg3;
- (void)like:(id)arg1 callback:(id)arg2;
- (void)deletePost:(id)arg1 callback:(id)arg2;
- (void)createPost:(id)arg1 callback:(id)arg2;
- (void)loadPersonal:(id)arg1 callback:(id)arg2;
- (void)load:(id)arg1 callback:(id)arg2;

@end

