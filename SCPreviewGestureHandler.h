//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UITapGestureRecognizer;
@protocol SCSCPreviewGestureHandlerDelegate;

@interface SCPreviewGestureHandler : NSObject
{
    id <SCSCPreviewGestureHandlerDelegate> _delegate;
    UITapGestureRecognizer *_tapGestureRecognizer;
    unsigned long long _disabledOptions;
}

- (void).cxx_destruct;
- (void)_handleTapGesture:(id)arg1;
@property(readonly, nonatomic) __weak id <SCSCPreviewGestureHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long disabledOptions; // @synthesize disabledOptions=_disabledOptions;
- (id)initWithPreviewView:(id)arg1 configuration:(id)arg2 delegate:(id)arg3;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
- (void)toggleGestureOptions:(unsigned long long)arg1 enabled:(_Bool)arg2;

@end

