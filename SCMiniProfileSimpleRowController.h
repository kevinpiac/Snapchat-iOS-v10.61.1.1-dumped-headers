//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMiniProfileRowController.h"

@class NSString, UIImage;

@interface SCMiniProfileSimpleRowController : SCMiniProfileRowController
{
    UIImage *_image;
    NSString *_text;
    NSString *_detailText;
    NSString *_accessibilityIdentifier;
    id _target;
    SEL _selector;
    _Bool _disabled;
    id _userInfo;
}

+ (id)disabledRowControllerWithImage:(id)arg1 text:(id)arg2 detailText:(id)arg3 accessibilityIdentifier:(id)arg4;
- (void).cxx_destruct;
- (Class)cellClass;
- (double)cellHeight;
- (void)didSelectCell;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
- (id)initWithImage:(id)arg1 text:(id)arg2 detailText:(id)arg3 accessibilityIdentifier:(id)arg4 target:(id)arg5 selector:(SEL)arg6;
@property(retain) id userInfo; // @synthesize userInfo=_userInfo;
- (_Bool)shouldSelectCell;
- (void)willDisplayCell:(id)arg1;

@end

