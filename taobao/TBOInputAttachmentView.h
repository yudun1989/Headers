//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIImage, UIImageView, UILabel;
@protocol TBOInputAttachmentViewDelegate;

@interface TBOInputAttachmentView : UIView
{
    long long _type;
    UIImageView *_imageView;
    UILabel *_descLabel;
    id <TBOInputAttachmentViewDelegate> _delegate;
    UIImage *_singleImage;
    NSString *_singleImagePath;
    NSMutableArray *_imageArray;
    NSMutableArray *_imagePathArray;
    NSString *_descString;
    double _videoDuration;
    UIImage *_videoImage;
    NSString *_videoImagePath;
    NSString *_videoPath;
    NSString *_videoFileSize;
    NSString *_videoBitRate;
    NSString *_itemPic;
    id _item;
}

@property(retain, nonatomic) id item; // @synthesize item=_item;
@property(retain, nonatomic) NSString *itemPic; // @synthesize itemPic=_itemPic;
@property(retain, nonatomic) NSString *videoBitRate; // @synthesize videoBitRate=_videoBitRate;
@property(retain, nonatomic) NSString *videoFileSize; // @synthesize videoFileSize=_videoFileSize;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(retain, nonatomic) NSString *videoImagePath; // @synthesize videoImagePath=_videoImagePath;
@property(retain, nonatomic) UIImage *videoImage; // @synthesize videoImage=_videoImage;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) NSString *descString; // @synthesize descString=_descString;
@property(retain, nonatomic) NSMutableArray *imagePathArray; // @synthesize imagePathArray=_imagePathArray;
@property(retain, nonatomic) NSMutableArray *imageArray; // @synthesize imageArray=_imageArray;
@property(retain, nonatomic) NSString *singleImagePath; // @synthesize singleImagePath=_singleImagePath;
@property(retain, nonatomic) UIImage *singleImage; // @synthesize singleImage=_singleImage;
@property(nonatomic) __weak id <TBOInputAttachmentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reset;
- (id)imageView;
- (void)handleTapGesture:(id)arg1;
- (_Bool)hasData;
- (void)reloadData;
- (void)addImageWithUrl:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)closeBottonDown:(id)arg1;
- (void)setUpViews;
- (id)initWithFrame:(struct CGRect)arg1 attachmentType:(long long)arg2;

@end

