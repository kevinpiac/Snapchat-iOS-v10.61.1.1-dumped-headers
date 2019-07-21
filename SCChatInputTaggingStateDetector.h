//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SCChatInputTaggingStateDetectorDelegate;

@interface SCChatInputTaggingStateDetector : NSObject
{
    _Bool _isInTaggingMode;
    id <SCChatInputTaggingStateDetectorDelegate> _delegate;
    NSString *_tagInProgress;
    long long _currentTagStartIndex;
}

- (void).cxx_destruct;
- (_Bool)_newTagDetected:(id)arg1 cursorPosition:(long long)arg2;
@property(readonly, nonatomic) long long currentTagStartIndex; // @synthesize currentTagStartIndex=_currentTagStartIndex;
@property(nonatomic) __weak id <SCChatInputTaggingStateDetectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)detectTagInText:(id)arg1 cursorPosition:(long long)arg2;
- (void)reset;
@property(readonly, nonatomic) NSString *tagInProgress; // @synthesize tagInProgress=_tagInProgress;

@end
