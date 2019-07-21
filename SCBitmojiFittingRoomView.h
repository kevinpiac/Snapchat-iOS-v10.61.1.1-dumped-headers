//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCHeaderDataSource-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"

@class NSString, SCCircleCheckButton, SCHeader, UIImageView;
@protocol SCBitmojiFittingRoomViewDelegate;

@interface SCBitmojiFittingRoomView : UIView <SCHeaderDelegate, SCHeaderDataSource>
{
    UIImageView *_storeBackgroundView;
    UIImageView *_avatarPreview;
    SCHeader *_topContainer;
    id <SCBitmojiFittingRoomViewDelegate> _delegate;
    SCCircleCheckButton *_saveButton;
}

- (void).cxx_destruct;
- (void)_didPerformTapGesture:(id)arg1;
- (id)backgroundColorForHeader;
@property(nonatomic) __weak id <SCBitmojiFittingRoomViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)leftButtonPressed;
@property(retain, nonatomic) SCCircleCheckButton *saveButton; // @synthesize saveButton=_saveButton;
- (void)saveButtonPressed;
- (void)setAvatarPreview:(id)arg1;
- (void)setStoreBackground:(id)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
