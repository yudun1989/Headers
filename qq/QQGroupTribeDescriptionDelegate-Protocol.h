//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSIndexSet, UIImage, UIViewController;

@protocol QQGroupTribeDescriptionDelegate <NSObject>
- (void)onPhotoEditor:(UIViewController *)arg1 didFinishWithImage:(UIImage *)arg2 hasEdited:(_Bool)arg3 index:(long long)arg4;
- (void)onDeleteWithIndexset:(NSIndexSet *)arg1;
- (void)onUpdateOnePhoto:(unsigned long long)arg1 isSelected:(_Bool)arg2;
- (void)onDelete:(unsigned long long)arg1;
@end

