//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALUSMSRegisterBaseViewController.h"

@class ALUSamePersonView, MOBILEAPPExistUserInfoPB, NSString, aluButton;

@interface ALURegisterSamePersonViewController : ALUSMSRegisterBaseViewController
{
    _Bool _existUserHasQueryPassword;
    NSString *_memo;
    MOBILEAPPExistUserInfoPB *_existUserInfo;
    ALUSamePersonView *_samePersonView;
    aluButton *_changeOtherNumBtn;
}

@property(retain, nonatomic) aluButton *changeOtherNumBtn; // @synthesize changeOtherNumBtn=_changeOtherNumBtn;
@property(retain, nonatomic) ALUSamePersonView *samePersonView; // @synthesize samePersonView=_samePersonView;
@property(nonatomic) _Bool existUserHasQueryPassword; // @synthesize existUserHasQueryPassword=_existUserHasQueryPassword;
@property(retain, nonatomic) MOBILEAPPExistUserInfoPB *existUserInfo; // @synthesize existUserInfo=_existUserInfo;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
- (void).cxx_destruct;
- (void)onChangeOtherNum;
- (void)onNext;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)creatSubView;

@end

