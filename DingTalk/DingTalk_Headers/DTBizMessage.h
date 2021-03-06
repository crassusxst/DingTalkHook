//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTBizMessage-Protocol.h"
#import "DTBizMessageExtension-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface DTBizMessage : NSObject <DTBizMessageExtension, DTBizMessage>
{
    NSMutableDictionary *_userProperties;
    _Bool _isView;
    _Bool _isMine;
    _Bool _hasGap;
    _Bool _isDel;
    NSArray *_attachments;
    unsigned long long _primaryKey;
    NSString *_localMid;
    long long _mId;
    NSString *_cId;
    long long _bizType;
    unsigned long long _creatorType;
    long long _createdTime;
    long long _localSentTime;
    long long _readStatus;
    long long _unReadCount;
    long long _senderId;
    long long _senderVersion;
    long long _totalCount;
    NSString *_content;
    long long _attachmentsType;
    NSString *_attachmentsJson;
    long long _forwardedOriginalMid;
    NSString *_data;
    NSString *_extension;
    NSString *_localExtension;
    unsigned long long _sendStatus;
    long long _bizTag;
    NSDictionary *_bizDictionary;
    NSDictionary *_atList;
    long long _tag;
    long long _recallStatus;
    long long _shieldStatus;
    unsigned long long _isDecrypt;
    NSArray *_openIdExModels;
    NSDictionary *_atStatusList;
}

+ (long long)playStatusWithMessageMediaId:(id)arg1;
+ (long long)playStatusWithMessage:(id)arg1;
+ (void)asyncStoreExtensionInMessage:(id)arg1;
+ (void)asyncStoreLocalExtensionInMessage:(id)arg1;
+ (id)convertOpenIdExModelArray:(id)arg1;
+ (id)convertOpenIdExModel:(id)arg1;
+ (id)messagesFromWKMessages:(id)arg1;
+ (id)messageLocalizedContentWithWKMessage:(id)arg1;
+ (id)bizAtStatusListFromWKMessage:(id)arg1;
+ (id)messageFromWKMessage:(id)arg1;
+ (id)generateVideoMessageWithVideoMediaId:(id)arg1 imageMediaId:(id)arg2 isTransmit:(_Bool)arg3 cid:(id)arg4 forwardedOriginalMid:(long long)arg5 fileType:(id)arg6 fileName:(id)arg7 fileSize:(long long)arg8 videoHeight:(long long)arg9 videoWidth:(long long)arg10 duration:(long long)arg11 bitRate:(long long)arg12;
+ (id)generateLinkMessageWithMediaId:(id)arg1 isTransmit:(_Bool)arg2 cid:(id)arg3 forwardedOriginalMid:(long long)arg4 title:(id)arg5 text:(id)arg6 url:(id)arg7;
+ (id)generateFileMessageWithMediaId:(id)arg1 isTransmit:(_Bool)arg2 cid:(id)arg3 forwardedOriginalMid:(long long)arg4 fileName:(id)arg5 fileType:(id)arg6 fileSize:(long long)arg7;
+ (id)generateAudioMessageWithMediaId:(id)arg1 isTransmit:(_Bool)arg2 transmitMessage:(id)arg3 cid:(id)arg4 forwardedOriginalMid:(long long)arg5 volumns:(id)arg6 duration:(double)arg7;
+ (id)generateImageMessageWithMediaId:(id)arg1 isTransmit:(_Bool)arg2 cid:(id)arg3 forwardedOriginalMid:(long long)arg4;
+ (id)generateTextMessage:(id)arg1 isTransmit:(_Bool)arg2 cid:(id)arg3 atList:(id)arg4 forwardedOriginalMid:(long long)arg5;
@property(copy, nonatomic) NSDictionary *atStatusList; // @synthesize atStatusList=_atStatusList;
@property(copy, nonatomic) NSArray *openIdExModels; // @synthesize openIdExModels=_openIdExModels;
@property(nonatomic) unsigned long long isDecrypt; // @synthesize isDecrypt=_isDecrypt;
@property(nonatomic) _Bool isDel; // @synthesize isDel=_isDel;
@property(nonatomic) _Bool hasGap; // @synthesize hasGap=_hasGap;
@property(nonatomic) long long shieldStatus; // @synthesize shieldStatus=_shieldStatus;
@property(nonatomic) long long recallStatus; // @synthesize recallStatus=_recallStatus;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(copy) NSDictionary *atList; // @synthesize atList=_atList;
@property(copy, nonatomic) NSDictionary *bizDictionary; // @synthesize bizDictionary=_bizDictionary;
@property(nonatomic) long long bizTag; // @synthesize bizTag=_bizTag;
@property(nonatomic) unsigned long long sendStatus; // @synthesize sendStatus=_sendStatus;
@property(nonatomic) _Bool isMine; // @synthesize isMine=_isMine;
@property(copy, nonatomic) NSString *localExtension; // @synthesize localExtension=_localExtension;
@property(copy, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(copy, nonatomic) NSString *data; // @synthesize data=_data;
@property(nonatomic) long long forwardedOriginalMid; // @synthesize forwardedOriginalMid=_forwardedOriginalMid;
@property(copy, nonatomic) NSString *attachmentsJson; // @synthesize attachmentsJson=_attachmentsJson;
@property(nonatomic) long long attachmentsType; // @synthesize attachmentsType=_attachmentsType;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) long long senderVersion; // @synthesize senderVersion=_senderVersion;
@property(nonatomic) long long senderId; // @synthesize senderId=_senderId;
@property(nonatomic) long long unReadCount; // @synthesize unReadCount=_unReadCount;
@property(nonatomic) _Bool isView; // @synthesize isView=_isView;
@property(nonatomic) long long readStatus; // @synthesize readStatus=_readStatus;
@property(nonatomic) long long localSentTime; // @synthesize localSentTime=_localSentTime;
@property(nonatomic) long long createdTime; // @synthesize createdTime=_createdTime;
@property(nonatomic) unsigned long long creatorType; // @synthesize creatorType=_creatorType;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *cId; // @synthesize cId=_cId;
@property(nonatomic) long long mId; // @synthesize mId=_mId;
@property(copy, nonatomic) NSString *localMid; // @synthesize localMid=_localMid;
@property(nonatomic) unsigned long long primaryKey; // @synthesize primaryKey=_primaryKey;
@property(copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isAtMe;
- (_Bool)isRedEnvelopNoticeMessage;
- (_Bool)isRedEnvelopMessage;
- (id)propertyForKey:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (id)indentifier;
- (_Bool)isEqualIndentifier:(id)arg1;
@property(nonatomic) struct CGSize translateLabelSize;
@property(nonatomic) struct CGSize textLabelSize;
@property(nonatomic) struct CGSize cellSize; // @dynamic cellSize;
@property(nonatomic) struct CGSize noSharpBubbleSize; // @dynamic noSharpBubbleSize;
@property(nonatomic) _Bool isLikeEmotionNeedAnimate;
- (_Bool)isMsgNeedShowFullWidth;
@property(nonatomic) _Bool isSelect; // @dynamic isSelect;
@property(nonatomic) _Bool isSearchCursor; // @dynamic isSearchCursor;
- (_Bool)isConfirmedDING;
- (long long)dingCardInvitationStatus;
- (long long)dingCardRole;
- (id)mailReceverAddress;
- (void)setVideoUploadTaskId:(id)arg1;
- (id)videoUploadTaskId;
- (void)setVideoUploadPaused:(_Bool)arg1;
- (_Bool)hasVideoUploadPaused;
- (void)setVideoUploadProgress:(double)arg1;
- (double)videoUploadProgress;
- (void)setAudioTranslationContent:(id)arg1;
- (id)audioTranslationContent;
- (void)setExpandedAudioTranslationContent:(_Bool)arg1;
- (_Bool)isExpandedAudioTranslationContent;
- (void)sourceTagInfo:(CDUnknownBlockType)arg1;
- (_Bool)needShowSourceTagView;
- (_Bool)needShowTagView:(id)arg1 cModel:(id *)arg2;
- (id)extensionSourceFromUA;
- (id)extensionSourceFromType;
- (id)extensionTranslateProvider;
- (id)extensionTranslate;
- (_Bool)hasExtensionTranslate;
- (id)extensionValueForKey:(id)arg1;
- (void)setExtensionValue:(id)arg1 forKey:(id)arg2;
- (void)setExtensionTranslateStatus:(id)arg1;
- (id)extensionTranslateStatus;
- (void)setExtensionDictionary:(id)arg1;
- (id)extensionDictionary;
- (id)localExtensionValueForKey:(id)arg1;
- (void)setLocalExtensionValue:(id)arg1 forKey:(id)arg2;
- (void)setLocalExtensionDictionary:(id)arg1;
- (id)localExtensionDictionary;
- (_Bool)isThirdPartyEncrypt;
- (_Bool)isNeedThirdPartyEncrypt;
- (_Bool)isEncryptFileMsg;
- (id)decryptErrMsg;
- (_Bool)needShowRefreshView;
@property(nonatomic) long long countDown;
- (_Bool)isAllowedShowReadStatus;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
- (id)reactionBoardModelListInConversation:(id)arg1;
- (id)reactionCommentContent;
- (id)reactionCommentTitle:(id)arg1;
- (_Bool)showReactionInConversation:(id)arg1;
- (id)reactionReadCountString;
- (id)reactionCommentCountString;
- (id)reactionPrasiseCountString;
- (int)reactionReadCount;
- (int)reactionCommentCount;
- (int)reactionPrasiseCount;
- (_Bool)reactionPraise;
- (void)saveReactionPraise:(int)arg1 needStore:(_Bool)arg2;
- (_Bool)hasReactionCard;
- (_Bool)isActionCardHasLink;
- (_Bool)isActionCardSupportForward;
- (_Bool)isSupportDingCardCurrentVersion;
- (_Bool)isSupportMarkdownCurrentVersion;
- (_Bool)isContainMarkdown;
- (_Bool)needQueryReadStatus;
- (_Bool)isDingRemindTimeExpired;
- (id)buildMediaAuthInfo;
- (id)videoDataAccessRuleWithAuthInfo:(id)arg1;
- (id)videoDataAccessRule;
- (id)audioDataAccessRuleWithAuthInfo:(id)arg1;
- (id)audioDataAccessRule;
- (id)imageDataAccessRuleWithAuthInfo:(id)arg1;
- (id)imageDataAccessRule;
- (void)setRedEnvelopPicked;
- (_Bool)isRedEnvelopPicked;
- (id)lastEditorName;
- (id)lastEditor;
- (long long)lastEditTime;
- (long long)noEditorNum;
- (long long)editorNum;
- (_Bool)isDingMessage;
- (_Bool)hasDingReactionCard;
- (id)hasConfirmedContentBoardModel;
- (id)confirmContentBoardModel;
- (id)reactionContentBoardModelWithMine:(_Bool)arg1;
- (id)reactionBoardModelListWithDingModel:(id)arg1 conversation:(id)arg2;
- (_Bool)needShowBottomActionWithConversation:(id)arg1;
- (_Bool)needShowDing;
- (_Bool)dingFromUnreadMessage;
- (void)setMessageFromWKMessage:(id)arg1;
- (void)updateBizAtStatusListFromWKMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

