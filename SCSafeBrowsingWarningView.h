//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTTAttributedLabelDelegate-Protocol.h"

@class NSString, UILabel;
@protocol SCSafeBrowsingWarningViewDelegate;

@interface SCSafeBrowsingWarningView : UIView <TTTAttributedLabelDelegate>
{
    id <SCSafeBrowsingWarningViewDelegate> _delegate;
    long long _urlType;
    UILabel *_messageTop;
}

- (void).cxx_destruct;
- (void)goBackFromSafeBrowsing;
- (id)initWithDelegate:(id)arg1 urlType:(long long)arg2;
- (void)learnMoreFromSafeBrowsing;
- (void)loadWarningView;
- (void)updateWarningViewForUrlType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

