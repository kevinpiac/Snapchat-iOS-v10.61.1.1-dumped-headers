//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCCaptionUtils : NSObject
{
}

+ (void)addTaggedUserToDictionary:(id)arg1 taggedUser:(id)arg2 textLengthDiff:(long long)arg3 insertIndex:(long long)arg4;
+ (id)attributedStringFromSOJUGallleryCaption:(id)arg1;
+ (_Bool)captionPresent:(id)arg1;
+ (id)carouselDummyCellCaptionStyle;
+ (id)colorTransform:(id)arg1 tranformParameters:(id)arg2 baseColor:(id)arg3 pickedColor:(id)arg4;
+ (void)deleteAndModifyTaggingForEditingCaption:(id)arg1 currentTaggingIndex:(long long)arg2;
+ (id)dynamicBigTextCaptionStyle;
+ (id)dynamicBigTextCaptionStyleForOldSOJU;
+ (id)dynamicClassicCaptionStyle;
+ (id)fallBackToSystemfontOfSize:(double)arg1 captionStyleId:(id)arg2;
+ (long long)findPreviousUserTaggingPositionFromPostion:(long long)arg1 text:(id)arg2 taggedUserDictionary:(id)arg3;
+ (id)getColorArrayFromDynamicCaptionTextColor:(id)arg1 pickedColor:(id)arg2 colorIsChangeable:(_Bool)arg3 baseColor:(id)arg4;
+ (id)gradientImageFromColors:(id)arg1 colorStops:(id)arg2 colorGradientAngleDegree:(double)arg3 imageSize:(struct CGSize)arg4 drawingRects:(id)arg5;
+ (id)imageForBigTextCaption:(id)arg1 outputWidth:(double)arg2 isLagunaMedia:(_Bool)arg3;
+ (void)removeUserAndUpdateDictionaryIfNecessary:(id)arg1 textView:(id)arg2 range:(struct _NSRange)arg3 replacementTextLength:(long long)arg4;

@end

