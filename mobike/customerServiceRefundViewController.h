//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKBaseViewController.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSString, UIButton, UIImage, UILabel, UIScrollView, UITextView;

@interface customerServiceRefundViewController : MBKBaseViewController <UITextViewDelegate, UIScrollViewDelegate, UIActionSheetDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIAlertViewDelegate>
{
    UIButton *report;
    UIButton *makePhoto;
    UIImage *takePhotoImage;
    UIButton *ali;
    UIButton *wx;
    long long source;
    UIScrollView *_backScroll;
    UITextView *_textView;
    UILabel *_placeholder;
}

+ (void)load;
@property(retain, nonatomic) UILabel *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain) UIScrollView *backScroll; // @synthesize backScroll=_backScroll;
- (void).cxx_destruct;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)resignKeyboard;
- (void)relayoutSureButton;
- (void)didReceiveMemoryWarning;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)saveImage:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)openImagePickerControllerWith:(long long)arg1;
- (id)getImagePath;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)popAlert;
- (void)reoprtActioin:(id)arg1;
- (void)makePhoto:(id)arg1;
- (void)cleraImage;
- (void)wxClicked:(id)arg1;
- (void)aliClicked:(id)arg1;
- (void)orderFindClicked:(id)arg1;
- (void)setupView;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)textFiledEditChanged:(id)arg1;
- (void)dealloc;
- (void)addNavigationBar;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

