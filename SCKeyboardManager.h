//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCKeyboardManager : NSObject
{
    _Bool _hasKeyboardHeight;
    double _keyboardHeight;
}

+ (id)sharedInstance;
@property(readonly) _Bool hasKeyboardHeight; // @synthesize hasKeyboardHeight=_hasKeyboardHeight;
- (id)init;
- (void)keyboardFrameChange:(id)arg1;
@property(readonly) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;

@end
