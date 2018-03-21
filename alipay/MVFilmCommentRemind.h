//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class MVFCModel, MVLineView, MVPosterImageView, MVPresentView, MVStarRateControl, TBSDKMTOPServer, UIButton, UILabel, UIView;

@interface MVFilmCommentRemind : UIScrollView
{
    UIView *_titleView;
    MVPosterImageView *_posterView;
    UILabel *_filmNameLbl;
    MVLineView *_seperatorView;
    UILabel *_starTitle;
    MVStarRateControl *_starControl;
    UIButton *_commentButton;
    UIButton *_commitButton;
    UIButton *_closeButton;
    UIButton *_bgButton;
    MVPresentView *_presentView;
    TBSDKMTOPServer *_operation;
    MVFCModel *_model;
    double _rating;
}

@property(nonatomic) double rating; // @synthesize rating=_rating;
@property(retain, nonatomic) MVFCModel *model; // @synthesize model=_model;
@property(retain, nonatomic) TBSDKMTOPServer *operation; // @synthesize operation=_operation;
@property(nonatomic) __weak MVPresentView *presentView; // @synthesize presentView=_presentView;
@property(retain, nonatomic) UIButton *bgButton; // @synthesize bgButton=_bgButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *commitButton; // @synthesize commitButton=_commitButton;
@property(retain, nonatomic) UIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) MVStarRateControl *starControl; // @synthesize starControl=_starControl;
@property(retain, nonatomic) UILabel *starTitle; // @synthesize starTitle=_starTitle;
@property(retain, nonatomic) MVLineView *seperatorView; // @synthesize seperatorView=_seperatorView;
@property(retain, nonatomic) UILabel *filmNameLbl; // @synthesize filmNameLbl=_filmNameLbl;
@property(retain, nonatomic) MVPosterImageView *posterView; // @synthesize posterView=_posterView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (void)rateModified:(id)arg1 withRate:(double)arg2;
- (void)close;
- (void)commitButton:(id)arg1;
- (void)gotoCommentDetail:(id)arg1;
- (void)closeClicked:(id)arg1;
- (void)loadMisc:(id)arg1;
- (void)loadStar:(id)arg1;
- (void)loadSeperator:(id)arg1;
- (void)loadFilmName:(id)arg1;
- (void)loadPoster:(id)arg1;
- (void)loadTitle:(id)arg1;
- (void)dealloc;
- (void)show;
- (id)initWithCommentModel:(id)arg1;

@end

