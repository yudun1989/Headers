//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;
@protocol AREAvatarOrLogoViewProtocol;

@interface AREAvatarOrLogoImageView : UIView
{
    _Bool _shouldBorder;
    unsigned long long _type;
    id <AREAvatarOrLogoViewProtocol> _delegate;
    UIImageView *_userAvatarImageView;
    UIImageView *_businessLogoImageView;
}

@property(retain, nonatomic) UIImageView *businessLogoImageView; // @synthesize businessLogoImageView=_businessLogoImageView;
@property(retain, nonatomic) UIImageView *userAvatarImageView; // @synthesize userAvatarImageView=_userAvatarImageView;
@property(nonatomic) _Bool shouldBorder; // @synthesize shouldBorder=_shouldBorder;
@property(nonatomic) __weak id <AREAvatarOrLogoViewProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)tapAvatarHandler;
- (id)imageForHeader;
- (id)borderLayerWithBounds:(struct CGRect)arg1;
- (id)maskLayerWithBounds:(struct CGRect)arg1;
- (void)updateUserAvatarImageViewWithBorderColor:(id)arg1 borderWidth:(long long)arg2 radius:(double)arg3;
- (void)updateImageViewWithType:(unsigned long long)arg1 urlString:(id)arg2;
- (void)updateImageViewWithType:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1 shouldBorder:(_Bool)arg2 delegate:(id)arg3;

@end

