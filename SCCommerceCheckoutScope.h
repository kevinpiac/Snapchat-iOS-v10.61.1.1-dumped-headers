//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCCommerceCheckoutDelegate, SCUIContainer;

@interface SCCommerceCheckoutScope : NSObject
{
    id <SCUIContainer> _uiContainer;
    id <SCCommerceCheckoutDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <SCCommerceCheckoutDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithUIContainer:(id)arg1 delegate:(id)arg2;
@property(readonly, nonatomic) __weak id <SCUIContainer> uiContainer; // @synthesize uiContainer=_uiContainer;

@end
