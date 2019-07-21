//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSAttributedString, NSDictionary, NSString, SCDynamicCaptionStyle, UIColor;

@interface SCCaptionState : NSObject <NSObject, NSCopying>
{
    _Bool _hidden;
    _Bool _editing;
    _Bool _isTracking;
    long long _alignment;
    long long _source;
    NSString *_text;
    NSAttributedString *_attributedText;
    double _displayingFontSize;
    double _editingFontSize;
    double _centerX;
    double _centerY;
    double _rotation;
    double _keyboardHeight;
    NSArray *_trackingTrajectory;
    SCDynamicCaptionStyle *_captionStyle;
    UIColor *_pickedColor;
    long long _lastTextTransform;
    long long _uniqueId;
    NSDictionary *_taggedUsers;
    long long _userTaggingStartIndex;
}

+ (id)stateWithStyle:(id)arg1 source:(long long)arg2 text:(id)arg3 hidden:(_Bool)arg4;
+ (id)stateWithStyle:(id)arg1 text:(id)arg2 hidden:(_Bool)arg3;
- (void).cxx_destruct;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(retain, nonatomic) SCDynamicCaptionStyle *captionStyle; // @synthesize captionStyle=_captionStyle;
@property(nonatomic) double centerX; // @synthesize centerX=_centerX;
@property(nonatomic) double centerY; // @synthesize centerY=_centerY;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double displayingFontSize; // @synthesize displayingFontSize=_displayingFontSize;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) double editingFontSize; // @synthesize editingFontSize=_editingFontSize;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
- (id)init;
- (_Bool)isClassicStyle;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic) _Bool isTracking; // @synthesize isTracking=_isTracking;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) long long lastTextTransform; // @synthesize lastTextTransform=_lastTextTransform;
@property(copy, nonatomic) UIColor *pickedColor; // @synthesize pickedColor=_pickedColor;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(copy, nonatomic) NSDictionary *taggedUsers; // @synthesize taggedUsers=_taggedUsers;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSArray *trackingTrajectory; // @synthesize trackingTrajectory=_trackingTrajectory;
@property(nonatomic) long long uniqueId; // @synthesize uniqueId=_uniqueId;
@property(nonatomic) long long userTaggingStartIndex; // @synthesize userTaggingStartIndex=_userTaggingStartIndex;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

