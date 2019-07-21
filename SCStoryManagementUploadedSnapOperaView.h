//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCLazy, SCStoryManagementViewersTagView, UIImageView, UIVisualEffectView;
@protocol SCStoryManagementUploadedSnapOperaViewDelegate;

@interface SCStoryManagementUploadedSnapOperaView : UIView
{
    SCStoryManagementViewersTagView *_viewersTagView;
    UIView *_arrowView;
    UIView *_arrowGestureRecognizerView;
    SCLazy *_attachmentButton;
    UIVisualEffectView *_attachmentEffectView;
    UIImageView *_attachmentImageView;
    id <SCStoryManagementUploadedSnapOperaViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_didTapAttachment;
- (void)_didTapViewersTag;
- (void)_showAttachmentButton;
@property(nonatomic) __weak id <SCStoryManagementUploadedSnapOperaViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateViewWithViewCount:(unsigned long long)arg1 showAttachment:(_Bool)arg2;

@end
