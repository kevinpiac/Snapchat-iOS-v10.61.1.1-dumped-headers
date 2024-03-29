//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SCUserSession, UILabel, UIView;
@protocol SCChatMessageViewModel;

@interface SCChatTableViewCell : UITableViewCell
{
    UILabel *_dateHeaderLabel;
    UIView *_bodyView;
    SCUserSession *_userSession;
    id <SCChatMessageViewModel> _viewModel;
}

- (void).cxx_destruct;
- (void)adjustDateHeaderForOffset:(double)arg1;
@property(retain, nonatomic) UIView *bodyView; // @synthesize bodyView=_bodyView;
- (void)configureWithParentVC:(id)arg1;
@property(retain, nonatomic) UILabel *dateHeaderLabel; // @synthesize dateHeaderLabel=_dateHeaderLabel;
- (void)displayCell;
- (void)endDisplayingCell;
- (void)initBody;
- (void)initDateHeader;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 parentVC:(id)arg3 userSession:(id)arg4;
- (void)layoutSubviews;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) id <SCChatMessageViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void)willDisplayCell;

@end

