//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTMediaIdManager : NSObject
{
}

+ (id)getFileHosts:(long long)arg1;
+ (id)calcAuthUrl:(id)arg1 mediaAuthInfo:(id)arg2;
+ (id)transferToUrlFromMediaId:(id)arg1 fromMediaType:(short)arg2 toMediaType:(short)arg3 authInfo:(id)arg4 isWebp:(_Bool)arg5;
+ (id)transferToMediaIdObjV2:(id)arg1 authMediaId:(id)arg2;
+ (id)transferToMediaIdObjV2:(id)arg1;
+ (id)transferToMediaIdFromV2:(id)arg1 atDomain:(id)arg2;
+ (id)transferToLocalMediaIdFromV2:(id)arg1;
+ (_Bool)isTemporaryAuthFile:(id)arg1;
+ (id)transferToHttpsWithMediaId:(id)arg1 authMediaId:(id)arg2 authInfo:(id)arg3 isWebp:(_Bool)arg4;
+ (id)transferToHttpsWithAuthMediaId:(id)arg1 authInfo:(id)arg2 isWebp:(_Bool)arg3;
+ (id)calcMediaId:(id)arg1 withAuthMediaId:(id)arg2;
+ (void)setEnableCalcAuthTempOnly:(_Bool)arg1;
+ (void)setEnableAuthMediaId:(_Bool)arg1;
+ (_Bool)isEnableAuthMediaId;
+ (_Bool)isEnableAuthMediaId:(id)arg1 authMediaId:(id)arg2;
+ (_Bool)isMediaIdV2Uri:(id)arg1;
+ (_Bool)isMediaId:(id)arg1;
+ (void)calculateThumbImageSize:(struct CGSize)arg1 returnBlock:(CDUnknownBlockType)arg2;
+ (id)getThumbImageUrlWithMediaId:(id)arg1;
+ (id)getGifThumbHttpUrl:(id)arg1 thumbParas:(id)arg2 isWebp:(_Bool)arg3;
+ (id)getGifThumbFileName:(id)arg1;
+ (id)transferToMediaIdObj:(id)arg1;
+ (id)transferToOriginalFileName:(id)arg1;
+ (id)transferToOriginalFileName:(id)arg1 mediaStr:(id)arg2;
+ (id)mediaStrFilterDomain:(id)arg1;
+ (id)transferToMediaIdFrom:(id)arg1 atDomain:(id)arg2;
+ (id)transferToLocalMediaIdFrom:(id)arg1;
+ (id)transferToMediaIdFrom:(id)arg1;
+ (id)transferToHttpWithParas:(id)arg1 thumb:(id)arg2 isWebp:(_Bool)arg3;
+ (id)transferToHttpUrl:(id)arg1;
+ (_Bool)checkMediaTypeWithObj:(id)arg1 except:(short)arg2;
+ (_Bool)checkMediaTypeWithStr:(id)arg1 except:(short)arg2;
+ (id)transferToTfsFile:(id)arg1 paras:(id)arg2;
+ (id)transferTo:(id)arg1 urlOrMediaId:(_Bool)arg2;
+ (_Bool)isMediaIdUri:(id)arg1;
+ (id)transferToMediaIdFromV2:(id)arg1;
+ (_Bool)isWKLocalMediaId:(id)arg1;
+ (_Bool)mediaStr:(id)arg1 atDomain:(id)arg2;

@end

