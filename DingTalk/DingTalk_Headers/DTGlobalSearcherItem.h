//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LIMBizUserIconModel, NSArray, NSAttributedString, NSString, UIImage;

@interface DTGlobalSearcherItem : NSObject
{
    _Bool _isLastRow;
    long long _uid;
    UIImage *_avatarImage;
    NSArray *_avatarModels;
    LIMBizUserIconModel *_avatarModel;
    NSString *_name;
    NSString *_detail;
    NSAttributedString *_nameAttributed;
    NSAttributedString *_detailAttributed;
    id _model;
    NSString *_subTitle;
    unsigned long long _cellStyle;
    CDUnknownBlockType _cellDidSelectBlock;
}

@property(nonatomic) _Bool isLastRow; // @synthesize isLastRow=_isLastRow;
@property(copy, nonatomic) CDUnknownBlockType cellDidSelectBlock; // @synthesize cellDidSelectBlock=_cellDidSelectBlock;
@property(nonatomic) unsigned long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) id model; // @synthesize model=_model;
@property(copy, nonatomic) NSAttributedString *detailAttributed; // @synthesize detailAttributed=_detailAttributed;
@property(copy, nonatomic) NSAttributedString *nameAttributed; // @synthesize nameAttributed=_nameAttributed;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) LIMBizUserIconModel *avatarModel; // @synthesize avatarModel=_avatarModel;
@property(copy, nonatomic) NSArray *avatarModels; // @synthesize avatarModels=_avatarModels;
@property(retain, nonatomic) UIImage *avatarImage; // @synthesize avatarImage=_avatarImage;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *cellIdentifier;

@end

