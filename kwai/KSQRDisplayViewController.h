//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseViewController.h"

@class KSUser, NSAttributedString, NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface KSQRDisplayViewController : KSBaseViewController
{
    KSUser *_user;
    UIImageView *_QRCodeView;
    UIImageView *_QRCodeAvatar;
    UIImageView *_userAvatarView;
    UIView *_contentView;
    UIImageView *_QRShareLogo;
    UILabel *_guideLabel;
    NSAttributedString *_shareGuideAttributedString;
    NSLayoutConstraint *_bottomConstaint;
}

@property(retain, nonatomic) NSLayoutConstraint *bottomConstaint; // @synthesize bottomConstaint=_bottomConstaint;
@property(retain, nonatomic) NSAttributedString *shareGuideAttributedString; // @synthesize shareGuideAttributedString=_shareGuideAttributedString;
@property(retain, nonatomic) UILabel *guideLabel; // @synthesize guideLabel=_guideLabel;
@property(retain, nonatomic) UIImageView *QRShareLogo; // @synthesize QRShareLogo=_QRShareLogo;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImageView *userAvatarView; // @synthesize userAvatarView=_userAvatarView;
@property(retain, nonatomic) UIImageView *QRCodeAvatar; // @synthesize QRCodeAvatar=_QRCodeAvatar;
@property(retain, nonatomic) UIImageView *QRCodeView; // @synthesize QRCodeView=_QRCodeView;
@property(retain, nonatomic) KSUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (id)pageURL;
- (id)snapshot;
- (void)setupUI;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUser:(id)arg1;

@end

