//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCGalleryPrivateGalleryEnterPassphraseViewController;

@protocol SCGalleryPrivateGalleryEnterPassphraseViewControllerDelegate <NSObject>
- (void)enterPassphraseViewControllerDidPressBack:(SCGalleryPrivateGalleryEnterPassphraseViewController *)arg1;

@optional
- (void)enterPassphraseViewController:(SCGalleryPrivateGalleryEnterPassphraseViewController *)arg1 didCreatePassphrase:(NSString *)arg2;
- (void)enterPassphraseViewControllerDidPressUsePasscode:(SCGalleryPrivateGalleryEnterPassphraseViewController *)arg1;
- (void)enterPassphraseViewControllerDidUnlock:(SCGalleryPrivateGalleryEnterPassphraseViewController *)arg1;
@end

