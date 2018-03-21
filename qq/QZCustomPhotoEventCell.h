//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZBasePhotoCell.h>

#import <QQMainProject/QZPhotoModuleDownloaderInterfaceDelegate-Protocol.h>

@class AlbumTempElement, NSString, UIImageView, UILabel;

@interface QZCustomPhotoEventCell : QZBasePhotoCell <QZPhotoModuleDownloaderInterfaceDelegate>
{
    UILabel *_eventLabel;
    UIImageView *_bgImageView;
    AlbumTempElement *_element;
}

+ (double)heightWithEventTitle:(id)arg1 element:(id)arg2;
- (void).cxx_destruct;
- (void)requestFinishedisSuccess:(_Bool)arg1 image:(id)arg2 reqUrl:(id)arg3;
- (void)updateWithEventTitle:(id)arg1 element:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

