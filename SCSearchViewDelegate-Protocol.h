//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCSearchView;

@protocol SCSearchViewDelegate <NSObject>

@optional
- (void)searchView:(SCSearchView *)arg1 didChangeToText:(NSString *)arg2 byChangingCharactersInRange:(struct _NSRange)arg3 replacementString:(NSString *)arg4;
- (void)searchViewBackButtonTapped:(SCSearchView *)arg1;
- (void)searchViewClearButtonTapped:(SCSearchView *)arg1 close:(_Bool)arg2;
- (void)searchViewDidBeginEditing:(SCSearchView *)arg1;
- (void)searchViewDidEndEditing:(SCSearchView *)arg1;
- (_Bool)searchViewShouldBeginEditing:(SCSearchView *)arg1;
- (_Bool)searchViewShouldDeleteCharacter:(SCSearchView *)arg1;
- (_Bool)searchViewShouldReturn:(SCSearchView *)arg1 withSearchText:(NSString *)arg2;
@end

