//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, QQAsynUrlImageView, UIImage, UIImageView, UILabel;

@interface PLCommonLoadingView : UIView
{
    UIImageView *_loadingImageView;
    QQAsynUrlImageView *_loadingNearbyImageView;
    UILabel *_loadingLabel;
    NSString *_loadingText;
    NSString *_gifUrl;
    UIImage *_defaultImage;
    NSMutableArray *_images;
}

@property(retain, nonatomic) NSMutableArray *images; // @synthesize images=_images;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(copy, nonatomic) NSString *gifUrl; // @synthesize gifUrl=_gifUrl;
@property(copy, nonatomic) NSString *loadingText; // @synthesize loadingText=_loadingText;
@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) QQAsynUrlImageView *loadingNearbyImageView; // @synthesize loadingNearbyImageView=_loadingNearbyImageView;
@property(retain, nonatomic) UIImageView *loadingImageView; // @synthesize loadingImageView=_loadingImageView;
- (void)setHidden:(_Bool)arg1;
- (void)stopAnimating;
- (void)startAnimating;
- (void)internalInitElement;
- (void)loadImage;
- (void)dealloc;
- (id)init;
- (id)initWithNearbyLoadingText:(id)arg1 gifUrl:(id)arg2 defaultImage:(id)arg3;
- (id)initWithLoadingText:(id)arg1;

@end

