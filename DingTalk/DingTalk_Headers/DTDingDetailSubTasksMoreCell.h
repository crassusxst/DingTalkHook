//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseCell.h"

@class DTDingDetailSubTasksMoreCellItem, UIButton, UIImage, UIImageView;

@interface DTDingDetailSubTasksMoreCell : DTBaseCell
{
    DTDingDetailSubTasksMoreCellItem *_cellItem;
    UIButton *_showAllButton;
    UIImageView *_backgroundGrayView;
    UIImage *_backgroundImageForHead;
    UIImage *_backgroundImageForMid;
    UIImage *_backgroundImageForTail;
}

@property(retain, nonatomic) UIImage *backgroundImageForTail; // @synthesize backgroundImageForTail=_backgroundImageForTail;
@property(retain, nonatomic) UIImage *backgroundImageForMid; // @synthesize backgroundImageForMid=_backgroundImageForMid;
@property(retain, nonatomic) UIImage *backgroundImageForHead; // @synthesize backgroundImageForHead=_backgroundImageForHead;
@property(retain, nonatomic) UIImageView *backgroundGrayView; // @synthesize backgroundGrayView=_backgroundGrayView;
@property(retain, nonatomic) UIButton *showAllButton; // @synthesize showAllButton=_showAllButton;
@property(retain, nonatomic) DTDingDetailSubTasksMoreCellItem *cellItem; // @synthesize cellItem=_cellItem;
- (void).cxx_destruct;
- (void)showAll;
- (void)configCellWithItem:(id)arg1;
- (void)layoutSubViewsForCell;
- (id)initWithCellItem:(id)arg1;

@end

