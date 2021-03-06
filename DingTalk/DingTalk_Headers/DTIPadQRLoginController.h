//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class NSString, UIImageView, UILabel;

@interface DTIPadQRLoginController : DTViewController
{
    NSString *_qrCode;
    CDUnknownBlockType _finishBlock;
    UIImageView *_qrImgView;
    UILabel *_tipTitleLbl;
    UILabel *_tipContentLbl;
}

@property(retain, nonatomic) UILabel *tipContentLbl; // @synthesize tipContentLbl=_tipContentLbl;
@property(retain, nonatomic) UILabel *tipTitleLbl; // @synthesize tipTitleLbl=_tipTitleLbl;
@property(retain, nonatomic) UIImageView *qrImgView; // @synthesize qrImgView=_qrImgView;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
- (void).cxx_destruct;
- (void)failLoginWithError:(id)arg1;
- (void)onScaned:(id)arg1;
- (void)removeScanObserver;
- (void)addScanObserver;
- (void)loadQRCode;
- (void)prepareLoadQRCode;
- (void)onClose:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

