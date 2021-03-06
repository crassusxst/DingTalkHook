//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTCellItem.h"

@class DTBizMessage, DTContactPickIdentifier, DTContactPickNameModel, DTIconFontConf, DTUserCellLayout, NSArray, NSAttributedString, NSString, UIColor, UIFont, UIImage;

@interface DTContactPickCellItem : DTCellItem
{
    _Bool _actionBtnDisable;
    _Bool _showAcionBtnDivideLine;
    _Bool _pickRequired;
    _Bool _commentAlignNameLabel;
    _Bool _showSafeIcon;
    long long _uid;
    NSAttributedString *_attrDetail;
    unsigned long long _pickStyle;
    NSArray *_avatarModels;
    long long _avatarSize;
    DTContactPickNameModel *_nameModel;
    UIColor *_nameColor;
    UIFont *_nameFont;
    double _maxNameWidth;
    NSString *_status;
    UIColor *_statusColor;
    UIFont *_statusFont;
    double _maxStatusWidth;
    NSString *_actionBtnTitle;
    UIColor *_actionBtnTitleColor;
    UIFont *_actionBtnTitleFont;
    NSString *_actionBtnImage;
    DTIconFontConf *_actionBtnIconFont;
    UIImage *_actionBtnBackgroudImage;
    unsigned long long _signStyle;
    NSString *_signString;
    UIImage *_signImage;
    DTIconFontConf *_signImageIconFont;
    CDUnknownBlockType _actionBtnDidClick;
    DTContactPickIdentifier *_iden;
    UIColor *_bgColor;
    DTUserCellLayout *_layout;
    struct CGSize _actionBtnSize;
}

@property(retain, nonatomic) DTUserCellLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) _Bool showSafeIcon; // @synthesize showSafeIcon=_showSafeIcon;
@property(nonatomic) _Bool commentAlignNameLabel; // @synthesize commentAlignNameLabel=_commentAlignNameLabel;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) DTContactPickIdentifier *iden; // @synthesize iden=_iden;
@property(nonatomic) _Bool pickRequired; // @synthesize pickRequired=_pickRequired;
@property(nonatomic) _Bool showAcionBtnDivideLine; // @synthesize showAcionBtnDivideLine=_showAcionBtnDivideLine;
@property(copy, nonatomic) CDUnknownBlockType actionBtnDidClick; // @synthesize actionBtnDidClick=_actionBtnDidClick;
@property(retain, nonatomic) DTIconFontConf *signImageIconFont; // @synthesize signImageIconFont=_signImageIconFont;
@property(copy, nonatomic) UIImage *signImage; // @synthesize signImage=_signImage;
@property(copy, nonatomic) NSString *signString; // @synthesize signString=_signString;
@property(nonatomic) unsigned long long signStyle; // @synthesize signStyle=_signStyle;
@property(nonatomic) struct CGSize actionBtnSize; // @synthesize actionBtnSize=_actionBtnSize;
@property(retain, nonatomic) UIImage *actionBtnBackgroudImage; // @synthesize actionBtnBackgroudImage=_actionBtnBackgroudImage;
@property(retain, nonatomic) DTIconFontConf *actionBtnIconFont; // @synthesize actionBtnIconFont=_actionBtnIconFont;
@property(copy, nonatomic) NSString *actionBtnImage; // @synthesize actionBtnImage=_actionBtnImage;
@property(nonatomic) _Bool actionBtnDisable; // @synthesize actionBtnDisable=_actionBtnDisable;
@property(retain, nonatomic) UIFont *actionBtnTitleFont; // @synthesize actionBtnTitleFont=_actionBtnTitleFont;
@property(retain, nonatomic) UIColor *actionBtnTitleColor; // @synthesize actionBtnTitleColor=_actionBtnTitleColor;
@property(copy, nonatomic) NSString *actionBtnTitle; // @synthesize actionBtnTitle=_actionBtnTitle;
@property(nonatomic) double maxStatusWidth; // @synthesize maxStatusWidth=_maxStatusWidth;
@property(retain, nonatomic) UIFont *statusFont; // @synthesize statusFont=_statusFont;
@property(retain, nonatomic) UIColor *statusColor; // @synthesize statusColor=_statusColor;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(nonatomic) double maxNameWidth; // @synthesize maxNameWidth=_maxNameWidth;
@property(retain, nonatomic) UIFont *nameFont; // @synthesize nameFont=_nameFont;
@property(retain, nonatomic) UIColor *nameColor; // @synthesize nameColor=_nameColor;
@property(retain, nonatomic) DTContactPickNameModel *nameModel; // @synthesize nameModel=_nameModel;
@property(nonatomic) long long avatarSize; // @synthesize avatarSize=_avatarSize;
@property(retain, nonatomic) NSArray *avatarModels; // @synthesize avatarModels=_avatarModels;
@property(nonatomic) unsigned long long pickStyle; // @synthesize pickStyle=_pickStyle;
@property(retain, nonatomic) NSAttributedString *attrDetail; // @synthesize attrDetail=_attrDetail;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)operationIcon;
- (_Bool)shouldHighlight;
- (id)reuseIdentifier;
- (id)cellForItem;
- (id)init;
@property(retain, nonatomic) DTBizMessage *message; // @dynamic message;
@property(nonatomic) long long remaindStatus; // @dynamic remaindStatus;

@end

