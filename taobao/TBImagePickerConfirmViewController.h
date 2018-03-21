//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIButton, UIImage, UIImageView, UIScrollView, UIView;
@protocol TBImagePickerConfirmViewControllerDelegate;

@interface TBImagePickerConfirmViewController : UIViewController <UIScrollViewDelegate>
{
    id <TBImagePickerConfirmViewControllerDelegate> _delegate;
    UIScrollView *_scrollView;
    UIImageView *_imageView;
    UIImage *_image;
    UIView *_toolBarView;
    UIButton *_confirmButton;
}

@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIView *toolBarView; // @synthesize toolBarView=_toolBarView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <TBImagePickerConfirmViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)viewSizeForImageSize:(struct CGSize)arg1;
- (void)didReceiveMemoryWarning;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)confirmButtonDidPressed:(id)arg1;
- (void)viewDidLoad;
- (id)initWithImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

