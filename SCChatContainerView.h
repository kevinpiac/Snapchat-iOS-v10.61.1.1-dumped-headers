//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCLazy;

@interface SCChatContainerView : UIView
{
    SCLazy *_eventAnnouncer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)didAddSubview:(id)arg1;
@property(readonly, nonatomic) SCLazy *eventAnnouncer; // @synthesize eventAnnouncer=_eventAnnouncer;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)willRemoveSubview:(id)arg1;

@end
