//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCCommerceCheckoutLaunching;

@interface SCCommerceLaunchCheckoutServices : NSObject
{
    id <SCCommerceCheckoutLaunching> _checkoutLauncher;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SCCommerceCheckoutLaunching> checkoutLauncher; // @synthesize checkoutLauncher=_checkoutLauncher;
- (id)initWithCheckoutLauncher:(id)arg1;

@end

