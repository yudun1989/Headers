//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTImagePreviewBaseCell.h"

@class TTImagePreviewPhotoView;

@interface TTImagePreviewPhotoCell : TTImagePreviewBaseCell
{
    TTImagePreviewPhotoView *_previewView;
}

@property(retain, nonatomic) TTImagePreviewPhotoView *previewView; // @synthesize previewView=_previewView;
- (void).cxx_destruct;
- (void)didDisplay;
- (void)willDisplay;
- (void)setModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

