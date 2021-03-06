//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class DTAsset, MPMoviePlayerController, UIButton, UIImageView, UILabel;
@protocol ELCAssetSelectionDelegate;

@interface DTAlbumVideoPreviewController : UIViewController
{
    _Bool _autoPlay;
    _Bool _disabledVideoDurationLimit;
    _Bool _isAllowedVideoDuration;
    DTAsset *_asset;
    id <ELCAssetSelectionDelegate> _parent;
    UIImageView *_coverImgView;
    MPMoviePlayerController *_player;
    UIButton *_playBtn;
    UILabel *_summaryLabel;
}

@property(nonatomic) _Bool isAllowedVideoDuration; // @synthesize isAllowedVideoDuration=_isAllowedVideoDuration;
@property(retain, nonatomic) UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(retain, nonatomic) UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) MPMoviePlayerController *player; // @synthesize player=_player;
@property(retain, nonatomic) UIImageView *coverImgView; // @synthesize coverImgView=_coverImgView;
@property(nonatomic) _Bool disabledVideoDurationLimit; // @synthesize disabledVideoDurationLimit=_disabledVideoDurationLimit;
@property(nonatomic) __weak id <ELCAssetSelectionDelegate> parent; // @synthesize parent=_parent;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(readonly, nonatomic) DTAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)playerStatusDidChange;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (_Bool)isPlaying;
- (void)onPlaybackStateChanged:(id)arg1;
- (void)onPlay:(id)arg1;
- (void)onOK:(id)arg1;
- (void)showPlayBtnImage:(_Bool)arg1;
- (void)readyToPlay:(id)arg1;
- (void)setPopGestureRecognizerEnabled:(_Bool)arg1;
- (id)buildTextLabelWithFont:(id)arg1 textColor:(id)arg2 text:(id)arg3;
- (void)showVideoDurationTooLong;
- (void)showSummaryLabel;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;

@end

