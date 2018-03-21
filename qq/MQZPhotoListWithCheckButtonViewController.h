//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZBasePhotoListEditViewController.h>

#import <QQMainProject/QQImagePickerBottomBarDelegate-Protocol.h>

@class MQZGroupPhotoesPicker, NSString, QQImagePickerBottomBar;

@interface MQZPhotoListWithCheckButtonViewController : QZBasePhotoListEditViewController <QQImagePickerBottomBarDelegate>
{
    MQZGroupPhotoesPicker *_delegate;
    QQImagePickerBottomBar *_bottomBar;
    unsigned long long _currentSelectPhotoNum;
}

+ (id)editViewController:(id)arg1 isForward:(_Bool)arg2;
@property(nonatomic) unsigned long long currentSelectPhotoNum; // @synthesize currentSelectPhotoNum=_currentSelectPhotoNum;
@property(nonatomic) __weak MQZGroupPhotoesPicker *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)hideVideoList;
- (id)getAnPhotoEmptyCellForTableView:(id)arg1;
- (int)groupCode;
- (void)onSelectPhotoToManage:(id)arg1 isSelected:(_Bool)arg2;
- (void)onSelectedImagesChange:(id)arg1;
- (void)QQImagePickerBottomBarSendButtonDidClick;
- (void)resetBottomBarState;
- (void)dealloc;
- (void)createEditBottomBar;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)isSupportRightDragToGoBack;
- (void)createHeaderView;
- (void)createRightButton;
- (void)initNotificationObservers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

