//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIView;

@interface SCTV3TooltipDisplayContext : NSObject
{
    UIView *_containerView;
    UIView *_anchorView;
    NSString *_text;
    long long _arrowPosition;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *anchorView; // @synthesize anchorView=_anchorView;
@property(readonly, nonatomic) long long arrowPosition; // @synthesize arrowPosition=_arrowPosition;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (id)initWithContainerView:(id)arg1 anchorView:(id)arg2 text:(id)arg3 arrowPosition:(long long)arg4;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;

@end

